// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKITEM_H
#define SBWORKITEM_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface SBWorkItem : NSObject

@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) id *work; // ivar: _workBlock


-(id)initWithWork:(id)arg0 ;


@end


#endif