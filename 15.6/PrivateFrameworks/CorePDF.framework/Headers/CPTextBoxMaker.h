// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPTEXTBOXMAKER_H
#define CPTEXTBOXMAKER_H


#import <Foundation/Foundation.h>

#import "CPBody.h"
#import "CPZone.h"

@interface CPTextBoxMaker : NSObject {
    CPBody *bodyZone;
    CPZone *mainZone;
}




+(void)boxLayoutsIn:(id)arg0 ;
+(void)promoteLayoutsIn:(id)arg0 ;
-(BOOL)layoutIsSliced:(id)arg0 ;
-(void)boxLayout:(id)arg0 ;
-(void)boxLayoutsIn:(id)arg0 ;
-(void)makeBoxesWith:(id)arg0 parent:(id)arg1 ;
-(void)promoteLayoutsIn:(id)arg0 ;
-(void)promoteLayoutsInCertainRegions:(id)arg0 ;
-(void)rotate:(id)arg0 ;
-(void)rotateTextBox:(id)arg0 ;


@end


#endif