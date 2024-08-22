// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKSETTINGSTRANSACTIONITEM_H
#define OKSETTINGSTRANSACTIONITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OKSettingsTransactionItem : NSObject {
    NSString *key;
}


@property (copy, nonatomic) NSString *key; // ivar: _key
@property (copy, nonatomic) id *updateBlock; // ivar: _updateBlock


-(id)init;
-(void)dealloc;


@end


#endif