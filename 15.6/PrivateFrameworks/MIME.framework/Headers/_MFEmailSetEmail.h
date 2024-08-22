// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFEMAILSETEMAIL_H
#define _MFEMAILSETEMAIL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _MFEmailSetEmail : NSObject {
    NSUInteger _hash;
    NSString *_encodedAddress;
    NSString *_comment;
}


@property (retain, nonatomic) NSString *address;
@property (readonly, nonatomic) NSString *commentedAddress;
@property (readonly, nonatomic) NSUInteger hash;


-(BOOL)isEqualToEmail:(id)arg0 ;
-(id)description;
-(id)initWithAddress:(id)arg0 ;
-(void)dealloc;


@end


#endif