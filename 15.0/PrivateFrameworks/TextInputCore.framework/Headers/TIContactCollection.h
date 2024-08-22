// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TICONTACTCOLLECTION_H
#define TICONTACTCOLLECTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TIContactCollection : NSObject {
    NSMutableArray *_contacts;
}


@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, nonatomic) BOOL sourceHasRelevancyScore; // ivar: _sourceHasRelevancyScore


-(id)initWithRelevanceScoreType:(BOOL)arg0 ;
-(void)addContact:(id)arg0 ;
-(void)enumerateContactsUsingBlock:(id)arg0 ;


@end


#endif