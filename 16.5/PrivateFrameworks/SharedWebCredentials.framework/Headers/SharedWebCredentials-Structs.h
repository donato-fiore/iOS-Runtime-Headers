typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct SWCPatternStorage {
    BOOL blocking;
    BOOL hasPath;
    BOOL hasFragment;
    BOOL query;
    BOOL caseInsensitive;
    BOOL notPercentEncoded;
    BOOL hasRequiredEntitlement;
    char cStrings;
} SWCPatternStorage;

typedef struct ? {
    unsigned int field0;
} ?;

typedef struct SWCSubstitutionVariable {
    BOOL terminator;
    BOOL includesEmptyValue;
    BOOL allValuesAreOneCharLong;
    char cStrings;
} SWCSubstitutionVariable;

typedef struct SWCFields {
    BOOL userApproval;
    BOOL siteOrFrameworkApproval;
    BOOL updating;
    BOOL systemApplication;
    BOOL enabledConfiguration;
    BOOL enterpriseManaged;
    BOOL systemPlaceholder;
    BOOL provenance;
    char relativeOrder;
} SWCFields;

