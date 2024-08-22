// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKAIRDROPITEM_H
#define CRKAIRDROPITEM_H

@class NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface CRKAirDropItem : NSObject

@property (readonly, copy, nonatomic) NSString *UTI;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(BOOL)isValidWithError:(*id)arg0 ;
-(id)copyToFolder:(id)arg0 error:(*id)arg1 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)moveToFolder:(id)arg0 error:(*id)arg1 ;


@end


#endif