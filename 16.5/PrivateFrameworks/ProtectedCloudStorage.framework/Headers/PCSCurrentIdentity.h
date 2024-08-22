// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCSCURRENTIDENTITY_H
#define PCSCURRENTIDENTITY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface PCSCurrentIdentity : NSObject

@property (retain) NSDate *currentItemPointerModificationTime; // ivar: _currentItemPointerModificationTime
@property *_PCSIdentityData identity; // ivar: _identity


-(id)initWithIdentity:(struct _PCSIdentityData *)arg0 currentItemPointerModificationTime:(id)arg1 ;
-(void)dealloc;


@end


#endif