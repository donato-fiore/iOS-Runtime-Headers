// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FASHAREDSERVICEGROUP_H
#define FASHAREDSERVICEGROUP_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface FASharedServiceGroup : NSObject

@property (retain, nonatomic) NSString *footerText; // ivar: _footerText
@property (retain, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (retain, nonatomic) NSString *headerText; // ivar: _headerText
@property (retain, nonatomic) NSArray *services; // ivar: _services


-(id)description;
-(id)initWithServerResponse:(id)arg0 ;


@end


#endif