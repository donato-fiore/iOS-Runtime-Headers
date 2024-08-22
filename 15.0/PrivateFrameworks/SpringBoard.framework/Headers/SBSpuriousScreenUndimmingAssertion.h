// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSPURIOUSSCREENUNDIMMINGASSERTION_H
#define SBSPURIOUSSCREENUNDIMMINGASSERTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBSpuriousScreenUndimmingAssertion : NSObject {
    NSString *_identifier;
}




+(BOOL)isAnyActive;
+(id)debugDescription;
+(void)_accessListWithBlock:(id)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif