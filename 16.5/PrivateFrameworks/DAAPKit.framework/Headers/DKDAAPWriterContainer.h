// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKDAAPWRITERCONTAINER_H
#define DKDAAPWRITERCONTAINER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface DKDAAPWriterContainer : NSObject

@property (retain, nonatomic) NSMutableData *childData; // ivar: _childData
@property (readonly, nonatomic) unsigned int code; // ivar: _code


-(id)formattedOutputData;
-(id)initWithCode:(unsigned int)arg0 ;


@end


#endif