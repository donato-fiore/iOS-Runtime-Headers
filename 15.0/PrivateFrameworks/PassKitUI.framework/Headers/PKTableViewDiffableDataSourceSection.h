// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTABLEVIEWDIFFABLEDATASOURCESECTION_H
#define PKTABLEVIEWDIFFABLEDATASOURCESECTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PKTableViewDiffableDataSourceSection : NSObject

@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif