// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENWEBRESOURCE_H
#define ENWEBRESOURCE_H

@class NSString, NSURL, NSData;

#import <Foundation/Foundation.h>


@interface ENWebResource : NSObject

@property (copy, nonatomic) NSString *MIMEType; // ivar: _MIMEType
@property (retain, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (copy, nonatomic) NSString *frameName; // ivar: _frameName
@property (copy, nonatomic) NSString *textEncodingName; // ivar: _textEncodingName


+(id)webResourceWithDictionary:(id)arg0 ;
-(id)initWithData:(id)arg0 URL:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 frameName:(id)arg4 ;
-(id)propertyList;


@end


#endif