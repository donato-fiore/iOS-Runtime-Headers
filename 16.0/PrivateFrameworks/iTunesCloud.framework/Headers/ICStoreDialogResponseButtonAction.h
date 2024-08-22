// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREDIALOGRESPONSEBUTTONACTION_H
#define ICSTOREDIALOGRESPONSEBUTTONACTION_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICStoreDialogResponseButtonAction : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSDictionary *actionDictionary; // ivar: _actionDictionary
@property (readonly, copy, nonatomic) NSString *buyParams;
@property (readonly, copy, nonatomic) NSString *itemName;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) NSString *subtarget;
@property (readonly, nonatomic) NSInteger type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResponseButtonActionDictionary:(id)arg0 ;


@end


#endif