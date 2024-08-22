// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACFPEXCONTACTNAMEITEM_H
#define SACFPEXCONTACTNAMEITEM_H



#import "SACFPEXItem.h"
#import "SAPerson.h"

@interface SACFPEXContactNameItem : SACFPEXItem

@property (retain, nonatomic) SAPerson *person;


+(id)contactNameItem;
+(id)contactNameItemWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif