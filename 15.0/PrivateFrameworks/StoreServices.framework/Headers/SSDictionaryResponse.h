// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDICTIONARYRESPONSE_H
#define SSDICTIONARYRESPONSE_H

@class NSArray, NSNumber, NSDictionary, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSDictionaryResponse : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *actions;
@property (readonly, nonatomic) NSNumber *failureType;
@property (readonly, nonatomic) NSArray *pingURLs;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // ivar: _dictionary
@property (readonly, nonatomic, getter=isSupportedProtocolVersion) BOOL supportedProtocolVersion;
@property (readonly, nonatomic) NSURL *versionMismatchURL;


-(id)_copyAccount;
-(id)_valueForProtocolKey:(id)arg0 ;
-(id)actionsWithActionType:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif