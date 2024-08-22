// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDCLIPRESTRICTIONSTASK_H
#define ASDCLIPRESTRICTIONSTASK_H

@class NSDictionary, NSDate;

#import <Foundation/Foundation.h>


@interface ASDClipRestrictionsTask : NSObject {
    NSDictionary *_dictionary;
    NSDate *_verificationDate;
}


@property (readonly) BOOL hasErrorStatus;
@property (readonly, nonatomic) NSInteger responseCode; // ivar: _responseCode


-(BOOL)hasResponseFlag:(NSInteger)arg0 ;
-(id)initWithClipRequest:(id)arg0 ;
-(id)initWithClipRequest:(id)arg0 verificationDate:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 verificationDate:(id)arg1 ;


@end


#endif