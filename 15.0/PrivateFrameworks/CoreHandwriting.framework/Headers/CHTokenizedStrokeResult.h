// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHTOKENIZEDSTROKERESULT_H
#define CHTOKENIZEDSTROKERESULT_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface CHTokenizedStrokeResult : NSObject

@property (readonly, nonatomic) NSInteger resultLevel; // ivar: _resultLevel
@property (readonly, copy, nonatomic) NSSet *strokeIdentifiers; // ivar: _strokeIdentifiers


-(id)initWithStrokeIdentifiers:(id)arg0 resultLevel:(NSInteger)arg1 ;
-(void)dealloc;


@end


#endif