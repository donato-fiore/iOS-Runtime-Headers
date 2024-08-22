// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMXPCLISTGRAPHSRESPONSE_H
#define CDMXPCLISTGRAPHSRESPONSE_H

@class NSString, NSOrderedSet, NSError;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CDMXPCListGraphsResponse : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *activeGraphName; // ivar: _activeGraphName
@property (readonly, nonatomic) NSOrderedSet *availableServiceGraphs; // ivar: _availableServiceGraphs
@property (readonly, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithGraphs:(id)arg0 activeGraphName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif