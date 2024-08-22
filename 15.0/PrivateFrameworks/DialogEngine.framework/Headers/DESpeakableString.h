// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DESPEAKABLESTRING_H
#define DESPEAKABLESTRING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DESpeakableString : NSObject

@property *void This; // ivar: _This
@property (retain) NSString *print;
@property (retain) NSString *speak;


-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithPrint:(id)arg0 speak:(id)arg1 ;
-(void)dealloc;


@end


#endif