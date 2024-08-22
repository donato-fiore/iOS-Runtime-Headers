// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGUNDERLYINGDATA_H
#define AMSBAGUNDERLYINGDATA_H

@class NSSet, NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AMSBagUnderlyingData : NSObject {
    ? version;
    ? expirationDate;
    ? fileKey;
    ? aliasKeys;
}


@property (nonatomic, readonly) NSSet *aliasKeys;
@property (nonatomic, readonly) NSDictionary *bagDictionary; // ivar: bagDictionary
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSString *fileKey;


-(id)init;
-(id)initWithFileKey:(id)arg0 aliasKeys:(id)arg1 bagDictionary:(id)arg2 expirationDate:(id)arg3 ;


@end


#endif