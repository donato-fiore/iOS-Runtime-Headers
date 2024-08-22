// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLENGINECOMPONENTENUMERATOR_H
#define CPLENGINECOMPONENTENUMERATOR_H

@class NSEnumerator;

#import <Foundation/Foundation.h>


@interface CPLEngineComponentEnumerator : NSObject {
    NSEnumerator *_enumerator;
    id *_handler;
}




-(id)initWithComponents:(id)arg0 handler:(id)arg1 ;
-(void)handleNextComponent;


@end


#endif