// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVTASKTOKENPOOL_H
#define PVTASKTOKENPOOL_H

@protocol PVTaskTokenPoolDelegate;

#import <Foundation/Foundation.h>


@interface PVTaskTokenPool : NSObject {
    NSUInteger _tokenCounter;
    stack<unsigned long, std::deque<unsigned long>> _tokenData;
    mutex _tokenLock;
}


@property (weak, nonatomic) NSObject<PVTaskTokenPoolDelegate> *delegate; // ivar: _delegate


-(id)getToken;
-(id)init;
-(id)initWithOffset:(NSUInteger)arg0 ;
-(void)returnToken:(id)arg0 ;


@end


#endif