// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNPREDICATE_H
#define CNPREDICATE_H

@class NSPredicate, NSString, NSArray;
@protocol CNDonatedContactsPredicate, NSCopying;



@interface CNPredicate : NSPredicate <CNDonatedContactsPredicate, NSCopying>

 {
    NSPredicate *_cn_predicate;
}


@property (nonatomic) BOOL augmentMainStoreResults; // ivar: _augmentMainStoreResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *mainStoreContactIdentifiers; // ivar: _mainStoreContactIdentifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)os_log;
-(BOOL)evaluateWithObject:(id)arg0 ;
-(BOOL)evaluateWithObject:(id)arg0 substitutionVariables:(id)arg1 ;
-(id)cn_predicate;
-(id)cn_resultTransformWithMatchInfos:(SEL)arg0 ;
-(id)contactsFromDonationStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPredicate:(id)arg0 ;
-(id)predicateFormat;
-(id)shortDebugDescription;
-(void)_cn_acceptVisitor:(id)arg0 ;
-(void)cn_triageWithLog:(id)arg0 serialNumber:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mainStoreDidFetchContacts:(id)arg0 unifiedFetch:(BOOL)arg1 ;


@end


#endif