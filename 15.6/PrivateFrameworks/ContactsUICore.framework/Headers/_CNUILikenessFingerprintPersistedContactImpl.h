// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNUILIKENESSFINGERPRINTPERSISTEDCONTACTIMPL_H
#define _CNUILIKENESSFINGERPRINTPERSISTEDCONTACTIMPL_H

@class NSString;
@protocol _CNUILikenessFingerprintImpl;

#import <Foundation/Foundation.h>


@interface _CNUILikenessFingerprintPersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl>



@property (readonly, copy) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)hasContactIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithContact:(id)arg0 ;
-(id)initWithContactIdentifier:(id)arg0 ;


@end


#endif