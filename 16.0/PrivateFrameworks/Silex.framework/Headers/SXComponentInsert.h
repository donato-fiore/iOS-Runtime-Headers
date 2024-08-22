// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXCOMPONENTINSERT_H
#define SXCOMPONENTINSERT_H

@protocol SXComponent><SXInsertableComponent, SXComponentLayout;

#import <Foundation/Foundation.h>


@interface SXComponentInsert : NSObject

@property (readonly, nonatomic) NSObject<SXComponent><SXInsertableComponent> *component; // ivar: _component
@property (readonly, nonatomic) NSObject<SXComponentLayout> *componentLayout; // ivar: _componentLayout


-(id)description;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 ;


@end


#endif