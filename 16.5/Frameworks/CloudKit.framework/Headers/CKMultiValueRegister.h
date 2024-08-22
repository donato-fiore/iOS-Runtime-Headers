// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMULTIVALUEREGISTER_H
#define CKMULTIVALUEREGISTER_H

@class NSArray, NSString, NSUUID, NSMutableDictionary, CKDistributedTimestampStateVector;
@protocol CKPropertiesDescription;

#import <Foundation/Foundation.h>


@interface CKMultiValueRegister : NSObject <CKPropertiesDescription>



@property (copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isConsumedState;
@property (readonly, nonatomic) NSUInteger nextClockValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableDictionary *timestampToContents; // ivar: _timestampToContents
@property (readonly, nonatomic) CKDistributedTimestampStateVector *vector; // ivar: _vector


+(id)placeholderIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)merge:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)replaceVectorStateForPresentOrTombstonedTimestamps:(unsigned char)arg0 ;
-(id)initWithIdentifier:(id)arg0 vector:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 vector:(id)arg1 contents:(id)arg2 error:(*id)arg3 ;
-(id)redactedDescription;
-(id)siteIdentifier;
-(void)CKDescribePropertiesUsing:(id)arg0 ;


@end


#endif