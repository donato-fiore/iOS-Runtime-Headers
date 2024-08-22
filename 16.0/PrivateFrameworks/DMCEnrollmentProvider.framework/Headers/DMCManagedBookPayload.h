// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCMANAGEDBOOKPAYLOAD_H
#define DMCMANAGEDBOOKPAYLOAD_H

@class MCPayload, MDMBook;



@interface DMCManagedBookPayload : MCPayload

@property (retain, nonatomic) MDMBook *book; // ivar: _book


+(id)localizedPluralForm;
+(id)localizedSingularForm;
+(id)typeStrings;
-(id)initWithBook:(id)arg0 ;
-(id)title;


@end


#endif