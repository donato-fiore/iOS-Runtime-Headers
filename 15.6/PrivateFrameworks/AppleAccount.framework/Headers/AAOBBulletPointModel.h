// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAOBBULLETPOINTMODEL_H
#define AAOBBULLETPOINTMODEL_H

@class NSString;
@protocol AAOBBulletPointModelProtocol;

#import <Foundation/Foundation.h>


@interface AAOBBulletPointModel : NSObject <AAOBBulletPointModelProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *description; // ivar: _description
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *symbolName; // ivar: _symbolName
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithSymbolNamed:(id)arg0 title:(id)arg1 description:(id)arg2 ;


@end


#endif