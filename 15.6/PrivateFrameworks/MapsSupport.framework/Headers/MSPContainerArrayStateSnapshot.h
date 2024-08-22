// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCONTAINERARRAYSTATESNAPSHOT_H
#define MSPCONTAINERARRAYSTATESNAPSHOT_H

@class NSUUID, NSArray, NSString;
@protocol MSPContainerStateSnapshot;

#import <Foundation/Foundation.h>


@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot>



@property (retain, nonatomic) NSUUID *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy, nonatomic) NSArray *contents; // ivar: _contents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithContents:(id)arg0 ;
-(id)initWithContents:(id)arg0 clientIdentifier:(id)arg1 ;


@end


#endif