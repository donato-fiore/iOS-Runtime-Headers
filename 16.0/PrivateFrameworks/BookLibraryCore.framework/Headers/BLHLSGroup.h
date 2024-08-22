// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLHLSGROUP_H
#define BLHLSGROUP_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface BLHLSGroup : NSObject

@property (readonly, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) NSArray *media; // ivar: _media


-(id)description;
-(id)initWithGroupID:(id)arg0 media:(id)arg1 ;


@end


#endif