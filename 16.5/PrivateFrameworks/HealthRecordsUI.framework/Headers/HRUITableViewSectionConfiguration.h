// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRUITABLEVIEWSECTIONCONFIGURATION_H
#define HRUITABLEVIEWSECTIONCONFIGURATION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface HRUITableViewSectionConfiguration : NSObject {
    ? sections;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *sections;


-(NSInteger)numberOfRowsInSection:(NSInteger)arg0 ;
-(id)addSectionWithIdentifier:(id)arg0 firstRowReuseIdentifier:(id)arg1 ;
-(id)addSectionWithIdentifier:(id)arg0 rowReuseIdentifiers:(id)arg1 ;
-(id)init;
-(id)rowAtIndexPath:(id)arg0 ;
-(void)addSection:(id)arg0 ;
-(void)removeAllSections;


@end


#endif