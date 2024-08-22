// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECEMAILADDRESSFORMATTER_H
#define ECEMAILADDRESSFORMATTER_H

@class NSFormatter;



@interface ECEmailAddressFormatter : NSFormatter {
    NSInteger _style;
}


@property (nonatomic) BOOL shouldIncludeDisplayName; // ivar: _shouldIncludeDisplayName


-(BOOL)getObjectValue:(*id)arg0 forString:(id)arg1 errorDescription:(*id)arg2 ;
-(id)_groupListString:(id)arg0 ;
-(id)_stringFromEmailAddress:(id)arg0 includeDisplayName:(BOOL)arg1 ;
-(id)_stringFromEmailAddressConvertible:(id)arg0 includeDisplayName:(BOOL)arg1 ;
-(id)_stringFromEmailAddressList:(id)arg0 includeDisplayName:(BOOL)arg1 ;
-(id)_stringFromGroupEmailAddress:(id)arg0 ;
-(id)_stringFromMailboxAddress:(id)arg0 includeDisplayName:(BOOL)arg1 ;
-(id)emailAddressFromString:(id)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)stringForObjectValue:(id)arg0 ;
-(id)stringFromEmailAddress:(id)arg0 ;
-(id)stringFromEmailAddressConvertible:(id)arg0 ;
-(id)stringFromEmailAddressList:(id)arg0 ;


@end


#endif