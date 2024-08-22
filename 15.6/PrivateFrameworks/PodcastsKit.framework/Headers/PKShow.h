// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSHOW_H
#define PKSHOW_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKShowStoreId.h"

@interface PKShow : NSObject <NSSecureCoding>

 {
    ? title;
    ? descriptionText;
    ? uuid;
    ? feedUrl;
    ? podcastUuid;
    ? artworkDictionary;
}


@property (nonatomic, readonly) NSString *descriptionText;
@property (nonatomic, readonly) BOOL isInLibrary;
@property (nonatomic, readonly) BOOL isSubscribed;
@property (nonatomic, readonly) PKShowStoreId *storeId; // ivar: storeId
@property (nonatomic, readonly) NSString *title;


+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)artworkUrlFor:(struct CGSize )arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif