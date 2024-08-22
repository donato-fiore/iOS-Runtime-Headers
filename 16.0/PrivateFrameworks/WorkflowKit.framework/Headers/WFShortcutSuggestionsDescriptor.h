// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHORTCUTSUGGESTIONSDESCRIPTOR_H
#define WFSHORTCUTSUGGESTIONSDESCRIPTOR_H

@class WFDatabaseObjectDescriptor, NSArray;



@interface WFShortcutSuggestionsDescriptor : WFDatabaseObjectDescriptor

@property (readonly, nonatomic) NSUInteger availability; // ivar: _availability
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 suggestions:(id)arg1 availability:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif