// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTWOPARTKEYPATH_H
#define AVTWOPARTKEYPATH_H

@class NSString;
@protocol AVKeyPath, NSCopying;

#import <Foundation/Foundation.h>


@interface AVTwoPartKeyPath : NSObject <AVKeyPath, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *keyPathString;
@property (readonly, nonatomic) NSString *secondLevelPropertyKey; // ivar: _secondLevelKey
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *topLevelPropertyKey; // ivar: _topLevelKey


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTopLevelPropertyKey:(id)arg0 secondLevelPropertyKey:(id)arg1 ;
-(void)dealloc;


@end


#endif