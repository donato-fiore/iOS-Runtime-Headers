// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAUIFAMILYSETUPPROMPTER_H
#define AAUIFAMILYSETUPPROMPTER_H

@class FAFamilySetupPrompter, NSString;
@protocol FAFamilySetupPrompterDelegate, AAUIFamilySetupPrompterDelegate;

#import <Foundation/Foundation.h>


@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate>

 {
    FAFamilySetupPrompter *_familySetupPrompter;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIFamilySetupPrompterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithiTunesAccount:(id)arg0 ;
-(void)familySetupPrompterDidFinish:(id)arg0 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg0 isFirstRun:(BOOL)arg1 ;


@end


#endif