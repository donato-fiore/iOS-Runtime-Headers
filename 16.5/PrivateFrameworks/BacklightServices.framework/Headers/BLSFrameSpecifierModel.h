// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSFRAMESPECIFIERMODEL_H
#define BLSFRAMESPECIFIERMODEL_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface BLSFrameSpecifierModel : NSObject {
    NSMutableArray *_specifiers;
    os_unfair_lock_s _lock;
    NSUInteger _stateHandler;
}


@property (readonly) NSArray *specifiers;


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)specifierAtPresentationDate:(id)arg0 ;
-(void)addSpecifiers:(id)arg0 ;
-(void)dealloc;
-(void)purgeAllButOneSpecifiersBeforeDate:(id)arg0 ;
-(void)purgeAllSpecifiersOnOrAfterDate:(id)arg0 ;


@end


#endif