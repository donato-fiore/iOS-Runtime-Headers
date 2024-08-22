// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASEVENTUID_H
#define ASEVENTUID_H

@class NSDate, NSString;
@protocol ASParsingLeafNode, NSCopying;

#import <Foundation/Foundation.h>


@interface ASEventUID : NSObject <ASParsingLeafNode, NSCopying>

 {
    NSDate *_exceptionDate;
    NSString *_uidWithoutExceptionDate;
    BOOL _isOutlookCreatedUid;
}




+(BOOL)acceptsTopLevelLeaves;
+(BOOL)expectsContent;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
-(id)_uidStringBySettingExceptionDateInOutlookUUIDString:(id)arg0 withTimeZone:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)exceptionDate;
-(id)initWithASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 lengthUntilEndOfTerminator:(int)arg5 ;
-(id)initWithCalFrameworkString:(id)arg0 ;
-(id)initWithGlobalObjectIdString:(id)arg0 ;
-(id)initWithUidString:(id)arg0 ;
-(id)recurrenceIDForResponseEmail;
-(id)uidForActiveSyncWithTimeZone:(id)arg0 ;
-(id)uidForCalFramework;
-(id)uidForResponseEmailWithTimeZone:(id)arg0 ;
-(id)uidFromGlobalObjId:(id)arg0 outIsOutlookCreatedUid:(*BOOL)arg1 ;
-(id)uidWithoutExceptionDate;
-(int)parsingState;
-(void)setExceptionDate:(id)arg0 ;


@end


#endif