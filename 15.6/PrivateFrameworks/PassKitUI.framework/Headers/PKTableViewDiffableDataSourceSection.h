// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKTABLEVIEWDIFFABLEDATASOURCESECTION_H
#define PKTABLEVIEWDIFFABLEDATASOURCESECTION_H

@class NSString;
@protocol PKIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface PKTableViewDiffableDataSourceSection : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif