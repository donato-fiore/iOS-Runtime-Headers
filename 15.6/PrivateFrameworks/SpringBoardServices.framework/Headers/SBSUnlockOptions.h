// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUNLOCKOPTIONS_H
#define SBSUNLOCKOPTIONS_H

@class NSString;
@protocol BSXPCCoding, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SBSUnlockOptions : NSObject <BSXPCCoding, BSXPCSecureCoding>



@property (nonatomic, setter=_setAboveOtherContexts:) BOOL _aboveOtherContexts; // ivar: _aboveOtherContexts
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setSubtitle:) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (retain, nonatomic, setter=_setTitle:) NSString *title; // ivar: _title


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif