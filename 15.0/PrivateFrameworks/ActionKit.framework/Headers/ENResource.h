// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENRESOURCE_H
#define ENRESOURCE_H

@class NSData, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ENResource : NSObject

@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSData *dataHash; // ivar: _dataHash
@property (retain, nonatomic) NSDictionary *edamAttributes; // ivar: _edamAttributes
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly, nonatomic) NSString *mediaTag;
@property (copy, nonatomic) NSString *mimeType; // ivar: _mimeType
@property (copy, nonatomic) NSString *sourceUrl; // ivar: _sourceUrl


+(id)resourceWithServiceResource:(id)arg0 ;
-(id)EDAMResource;
-(id)initWithData:(id)arg0 mimeType:(id)arg1 ;
-(id)initWithData:(id)arg0 mimeType:(id)arg1 filename:(id)arg2 ;


@end


#endif