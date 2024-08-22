// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOMMANDPARENTINSERTS_H
#define _UICOMMANDPARENTINSERTS_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface _UICommandParentInserts : NSObject

@property (readonly, nonatomic) NSArray *atEndElements; // ivar: _atEndElements
@property (readonly, nonatomic) NSArray *atStartElements; // ivar: _atStartElements
@property (readonly, nonatomic) NSDictionary *childInserts; // ivar: _childInserts
@property (readonly, nonatomic) NSArray *fallbackAfterElements; // ivar: _fallbackAfterElements
@property (readonly, nonatomic) NSArray *fallbackBeforeElements; // ivar: _fallbackBeforeElements


-(void)_addFallbackBeforeElements:(id)arg0 fallbackAfterElements:(id)arg1 ;
-(void)_setBeforeElements:(id)arg0 afterElements:(id)arg1 aroundElement:(id)arg2 ;


@end


#endif