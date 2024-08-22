// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ISPERSONALIZEOFFERSREQUEST_H
#define ISPERSONALIZEOFFERSREQUEST_H

@class NSMutableDictionary, NSNumber, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ISPersonalizeOffersRequest : NSObject <NSCopying>

 {
    NSMutableDictionary *_itemIDsByType;
}


@property (retain, nonatomic) NSNumber *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, nonatomic) NSArray *allItemTypes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)itemIdentifiersForItemType:(id)arg0 ;
-(void)addItemIdentifier:(id)arg0 forItemType:(id)arg1 ;
-(void)dealloc;


@end


#endif