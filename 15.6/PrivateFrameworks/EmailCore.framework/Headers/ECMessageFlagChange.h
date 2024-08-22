// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECMESSAGEFLAGCHANGE_H
#define ECMESSAGEFLAGCHANGE_H

@class NSString;
@protocol ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ECMessageFlagChange : NSObject <ECMessageFlagChangeBuilder, EFPubliclyDescribable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (nonatomic) BOOL deletedChanged; // ivar: _deletedChanged
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL draft; // ivar: _draft
@property (nonatomic) BOOL draftChanged; // ivar: _draftChanged
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) NSUInteger flagColor; // ivar: _flagColor
@property (nonatomic) BOOL flagColorChanged; // ivar: _flagColorChanged
@property (nonatomic) BOOL flagged; // ivar: _flagged
@property (nonatomic) BOOL flaggedChanged; // ivar: _flaggedChanged
@property (nonatomic) BOOL forwarded; // ivar: _forwarded
@property (nonatomic) BOOL forwardedChanged; // ivar: _forwardedChanged
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger junkLevel; // ivar: _junkLevel
@property (nonatomic) BOOL junkLevelChanged; // ivar: _junkLevelChanged
@property (nonatomic) BOOL junkLevelSetByUser; // ivar: _junkLevelSetByUser
@property (nonatomic) BOOL junkLevelSetByUserChanged; // ivar: _junkLevelSetByUserChanged
@property (nonatomic) BOOL read; // ivar: _read
@property (nonatomic) BOOL readChanged; // ivar: _readChanged
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (nonatomic) BOOL redirected; // ivar: _redirected
@property (nonatomic) BOOL redirectedChanged; // ivar: _redirectedChanged
@property (nonatomic) BOOL replied; // ivar: _replied
@property (nonatomic) BOOL repliedChanged; // ivar: _repliedChanged
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)changeFrom:(id)arg0 to:(id)arg1 ;
+(id)clearFlagged;
+(id)clearRead;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flagsAfterChangingFlags:(id)arg0 flagsWereChanged:(*BOOL)arg1 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)changesDeletedTo:(BOOL)arg0 ;
-(void)changesDraftTo:(BOOL)arg0 ;
-(void)changesFlagColorTo:(NSUInteger)arg0 ;
-(void)changesFlaggedTo:(BOOL)arg0 ;
-(void)changesForwardedTo:(BOOL)arg0 ;
-(void)changesJunkLevelSetByUserTo:(BOOL)arg0 ;
-(void)changesJunkLevelTo:(NSUInteger)arg0 ;
-(void)changesReadTo:(BOOL)arg0 ;
-(void)changesRedirectedTo:(BOOL)arg0 ;
-(void)changesRepliedTo:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif