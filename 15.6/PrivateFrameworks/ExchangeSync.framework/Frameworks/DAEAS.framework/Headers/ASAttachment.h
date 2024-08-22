// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASATTACHMENT_H
#define ASATTACHMENT_H

@class NSString, NSNumber, NSURL;
@protocol DAMailMessageAttachment, NSSecureCoding;


#import "ASItem.h"

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding>



@property (copy, nonatomic) NSString *clientId; // ivar: _clientId
@property (copy, nonatomic) NSString *contentId; // ivar: _contentId
@property (copy, nonatomic) NSString *contentLocation; // ivar: _contentLocation
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSNumber *hasBase64Transfer; // ivar: _hasBase64Transfer
@property (copy, nonatomic) NSNumber *isInline; // ivar: _isInline
@property (copy, nonatomic) NSURL *localPath; // ivar: _localPath
@property (copy, nonatomic) NSNumber *method; // ivar: _method
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSNumber *size; // ivar: _size


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)supportsSecureCoding;
+(id)asParseRules;
-(BOOL)isMostDefinitelyBase64ed;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)appendActiveSyncDataForTask:(id)arg0 toData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setPercentEscapedName:(id)arg0 ;


@end


#endif