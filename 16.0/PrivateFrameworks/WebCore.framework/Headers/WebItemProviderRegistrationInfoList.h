// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WEBITEMPROVIDERREGISTRATIONINFOLIST_H
#define WEBITEMPROVIDERREGISTRATIONINFOLIST_H

@class NSItemProvider, NSString, NSData;

#import <Foundation/Foundation.h>


@interface WebItemProviderRegistrationInfoList : NSObject {
    RetainPtr<NSMutableArray> _representations;
}


@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (nonatomic) CGSize preferredPresentationSize; // ivar: _preferredPresentationSize
@property (nonatomic) NSInteger preferredPresentationStyle; // ivar: _preferredPresentationStyle
@property (copy, nonatomic) NSString *suggestedName; // ivar: _suggestedName
@property (copy, nonatomic) NSData *teamData; // ivar: _teamData


-(NSUInteger)numberOfItems;
-(id)description;
-(id)init;
-(id)itemAtIndex:(NSUInteger)arg0 ;
-(void)addData:(id)arg0 forType:(id)arg1 ;
-(void)addPromisedType:(id)arg0 fileCallback:(id)arg1 ;
-(void)addRepresentingObject:(id)arg0 ;
-(void)dealloc;
-(void)enumerateItems:(id)arg0 ;


@end


#endif