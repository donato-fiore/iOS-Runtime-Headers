// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIGRAPHDESCRIPTIONBUILDER_H
#define _UIGRAPHDESCRIPTIONBUILDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UIGraphDescriptionBuilder : NSObject {
    NSString *_description;
}




+(id)graphDescriptionForNodes:(id)arg0 childProvider:(id)arg1 ;
-(id)description;
-(id)initWithNodes:(id)arg0 childProvider:(id)arg1 ;
// -(void)_recurseDescription:(id)arg0 node:(id)arg1 childProvider:(id)arg2 depth:(unk)arg3  ;


@end


#endif