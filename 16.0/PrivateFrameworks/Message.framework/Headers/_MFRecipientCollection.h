// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFRECIPIENTCOLLECTION_H
#define _MFRECIPIENTCOLLECTION_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface _MFRecipientCollection : NSObject {
    NSMutableArray *_to;
    NSMutableArray *_cc;
    NSMutableArray *_bcc;
}


@property (readonly, copy, nonatomic) NSArray *bccRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *bccRecipients;
@property (readonly, copy, nonatomic) NSArray *ccRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *ccRecipients;
@property (readonly, copy, nonatomic) NSArray *toRecipientStrings;
@property (readonly, copy, nonatomic) NSArray *toRecipients;


-(id)init;
-(void)addBCCRecipient:(id)arg0 ;
-(void)addBCCRecipientWithAddress:(id)arg0 displayName:(id)arg1 ;
-(void)addCCRecipient:(id)arg0 ;
-(void)addCCRecipientWithAddress:(id)arg0 displayName:(id)arg1 ;
-(void)addToRecipient:(id)arg0 ;
-(void)addToRecipientWithAddress:(id)arg0 displayName:(id)arg1 ;


@end


#endif