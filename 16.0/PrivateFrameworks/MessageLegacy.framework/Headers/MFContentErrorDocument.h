// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFCONTENTERRORDOCUMENT_H
#define MFCONTENTERRORDOCUMENT_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface MFContentErrorDocument : NSObject

@property (readonly, nonatomic) NSString *content;
@property (readonly, nonatomic) NSError *error; // ivar: _error


-(id)initWithMimePart:(id)arg0 ;
-(void)dealloc;


@end


#endif