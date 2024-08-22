// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTABLEVIEWDIFFABLEDATASOURCESECTION_H
#define PKTABLEVIEWDIFFABLEDATASOURCESECTION_H

@class NSString;
@protocol PKIdentifiable;

#import <Foundation/Foundation.h>


@interface PKTableViewDiffableDataSourceSection : NSObject <PKIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif