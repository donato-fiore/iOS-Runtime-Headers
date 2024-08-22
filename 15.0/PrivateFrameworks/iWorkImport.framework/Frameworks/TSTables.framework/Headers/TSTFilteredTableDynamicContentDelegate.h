// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTFILTEREDTABLEDYNAMICCONTENTDELEGATE_H
#define TSTFILTEREDTABLEDYNAMICCONTENTDELEGATE_H

@class NSString;
@protocol TSTLayoutDynamicContentProtocol;

#import <Foundation/Foundation.h>

#import "TSTTableInfo.h"

@interface TSTFilteredTableDynamicContentDelegate : NSObject <TSTLayoutDynamicContentProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TSTTableInfo *tableInfo; // ivar: _tableInfo


-(BOOL)cell:(*id)arg0 forCellID:(struct TSUCellCoord )arg1 ;
-(BOOL)dynamicContentMustDrawOnMainThread;
-(id)initWithTableInfo:(id)arg0 ;


@end


#endif