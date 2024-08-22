// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYAUTOEDITMODULE_H
#define PXSTORYAUTOEDITMODULE_H


#import <Foundation/Foundation.h>


@interface PXStoryAutoEditModule : NSObject

@property (readonly, nonatomic) NSInteger moduleType; // ivar: _moduleType
@property (readonly, nonatomic) _NSRange range; // ivar: _range


-(id)debugDescription;
-(id)initWithModuleType:(NSInteger)arg0 range:(struct _NSRange )arg1 ;


@end


#endif