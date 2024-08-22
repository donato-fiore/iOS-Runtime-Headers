// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTMTLDROPHINTSINFLIGHT_H
#define PTMTLDROPHINTSINFLIGHT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray *_activeGroups;
}




+(id)instance:(id)arg0 ;
+(void)setEnabled:(BOOL)arg0 device:(id)arg1 ;
-(id)init;
-(int)checkForUnreleasedDrophints;
-(void)_addResourceGroup:(id)arg0 toCommandBuffer:(id)arg1 ;
-(void)_dropResourceGroup:(id)arg0 fromCommandBuffer:(id)arg1 ;
-(void)setActiveResourceGroups:(id)arg0 ;


@end


#endif