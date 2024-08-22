// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRINLUSYSTEMINFORMED_H
#define SIRINLUSYSTEMINFORMED_H

@class NSArray, NSString;
@protocol SIRINLUSystemDialogAct;

#import <Foundation/Foundation.h>


@interface SIRINLUSystemInformed : NSObject <SIRINLUSystemDialogAct>



@property (retain, nonatomic) NSArray *entities; // ivar: _entities
@property (retain, nonatomic) NSString *renderedText; // ivar: renderedText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntities:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif